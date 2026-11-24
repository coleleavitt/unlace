@_silgen_name("unlace_pick") func unlacePick(_ x: Int32) -> Int32
@_silgen_name("unlace_alloc") func unlaceAlloc() -> UnsafeMutableRawPointer

public class Box {
    var v: Int32 = 0
    @inline(never) public func get() -> Int32 { v }
}

@inline(never)
public func later(_ k: Int32) async -> Int32 {
    await Task.yield()
    return unlacePick(k)
}

@main
struct Main {
    static func main() async {
        if CommandLine.arguments.count > 5 { _ = unlaceAlloc() }
        print(await later(Int32(CommandLine.arguments.count)) + Box().get())
    }
}
